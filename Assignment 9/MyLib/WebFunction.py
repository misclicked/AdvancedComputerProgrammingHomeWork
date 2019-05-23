'''
Created on 2019/5/2

@author: misclicked
'''
import urllib.request
def StringInWebsite(str, url):
    response = urllib.request.urlopen(url)
    htmlb = response.read()
    html = htmlb.decode(encoding="utf-8",errors="ignore")
    if html.find(str) != -1:
        print("{} is in {}".format(str,url));
    else:
        print("{} is not in {}".format(str,url));
        
def GetWebsiteHtml(url):
    response = urllib.request.urlopen(url)
    htmlb = response.read()
    html = htmlb.decode(encoding="utf-8",errors="ignore")
    return html