FROM python:3.9

RUN pip install pomegranate matplotlib

Workdir /root

COPY bayesian.py /root
COPY door_data /root/door_data


ENTRYPOINT /bin/bash