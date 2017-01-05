#!/bin/bash
xhost local:root
docker run -it \
    -v $(pwd):/usr/src/app \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
		-e "DISPLAY=unix${DISPLAY}" \
    --privileged \
    stef-app /bin/sh -c './STEF'
