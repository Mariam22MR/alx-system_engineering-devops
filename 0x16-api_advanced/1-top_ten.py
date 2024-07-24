#!/usr/bin/python3
"""queries the Reddit API and prints the titles of the first 10 hot
    posts listed for a given subreddit."""
import requests


def top_ten(subreddit):
    """querie Reddit API and prints first 10 hot posts"""
    r = requests.get("https://reddit.com/r/{}.json?sort=hot&limit=10".
                     format(subreddit), headers={"User-agent": "custom"})

    if(r.status_code == 200):
        for i in r.json().get("data").get("children"):
            print(i.get("data").get("title"))
    else:
        print("None")
