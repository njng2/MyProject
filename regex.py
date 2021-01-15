import re 

url_pattern = re.compile(r"http\S+", re.DOTALL) 
#\S+ anything followed by http that is a non-white text

example_tweet = "check this out. https://linkedin.com" 
text_without_url = url_pattern.sub(r"", example_tweet)

print(example_tweet)
print(text_without_url)

