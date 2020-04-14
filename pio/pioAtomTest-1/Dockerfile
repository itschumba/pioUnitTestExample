FROM python:latest

RUN pip install -U PlatformIO
WORKDIR pio
COPY . .
ENTRYPOINT ["pio"]
CMD ["run", "-e", "megaatmega2560"]
