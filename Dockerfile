FROM python:3.7

RUN apt-get update

RUN python -m pip install --upgrade pip

RUN adduser worker
USER worker
WORKDIR /home/worker

COPY --chown=worker:worker . .

RUN python setup.py install --user

CMD ["python"]
