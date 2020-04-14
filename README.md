### Running the Project Using Docker

1. Build the Docker image

```sh
cd pio/pioAtomTest-1/
docker build -t pio-ventilator .
```

2. Run `pio run -e megaatmega2560` in a Docker container based on the image built

```sh
docker run --rm -it pio-ventilator
```

> Note: If you choose to run a different pio sub-command in the container, e.g `test -e  megaatmega2560 -v --without-uploading --no-reset`, do so by adding it to the end of the docker run command:

```sh
docker run --rm -it pio-ventilator test -e  megaatmega2560 -v --without-uploading --no-reset
```
