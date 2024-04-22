import requests
from bs4 import BeautifulSoup
from urllib.parse import urljoin

def crawl(url, depth=3):
    visited = set()
    to_visit = [(url, 0)]

    while to_visit:
        current_url, current_depth = to_visit.pop(0)

        if current_url in visited or current_depth > depth:
            continue

        try:
            response = requests.get(current_url)
            if response.status_code == 200:
                soup = BeautifulSoup(response.text, 'html.parser')
                
                # Your logic to process the page content goes here
                print(f"Crawling: {current_url}")

                # Extract links from the page and add them to the to_visit list
                links = soup.find_all('a', href=True)
                for link in links:
                    absolute_url = urljoin(current_url, link['href'])
                    to_visit.append((absolute_url, current_depth + 1))

                visited.add(current_url)
            else:
                print(f"Failed to crawl {current_url}. Status code: {response.status_code}")
        except Exception as e:
            print(f"Error crawling {current_url}: {e}")

if __name__ == "__main__":
    start_url = "https://example.com"
    crawl(start_url)

