#!/bin/bash
pwd -P
if ! [[ -e vcpkg/vcpkg ]];then
    git clone https://github.com/cdsama/vcpkg.git --depth=1
    cd vcpkg
    bash ./bootstrap-vcpkg.sh
else
    cd vcpkg
    git fetch origin master
    UPSTREAM=${1:-'@{u}'}
    LOCAL=$(git rev-parse @)
    REMOTE=$(git rev-parse "$UPSTREAM")
    BASE=$(git merge-base @ "$UPSTREAM")
    echo "Local: ${LOCAL}"
    echo "REMOTE: ${REMOTE}"
    echo "BASE: ${BASE}"
    if [[ "${LOCAL}" = "${REMOTE}" ]]; then
        echo "Up-to-date"
    elif [[ "${LOCAL}" = "${BASE}" ]]; then
        echo "Need to pull"
        git pull
        bash ./bootstrap-vcpkg.sh
        ./vcpkg upgrade --no-dry-run
    elif [[ "${REMOTE}" = "${BASE}" ]]; then
        echo "Need to push"
        exit 1
    else
        echo "Diverged"
        exit 1
    fi
fi