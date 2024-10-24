#!/bin/bash
until curl -s http://opensearch:9200/_cat/health > /dev/null; do
	echo "Waiting for OpenSearch..."
	sleep 5
done
echo "OpenSearch is ready"