#include <curl/curl.h>

int request(const char *URL) {
  CURL *curl;
  CURLcode res;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, URL);

    /* Use HTTP/3 but fallback to earlier HTTP if necessary */
    curl_easy_setopt(curl, CURLOPT_HTTP_VERSION,
                     (long)CURL_HTTP_VERSION_3);

    /* Perform the request, res gets the return code */
    res = curl_easy_perform(curl);
    /* Check for errors */
    if(res != CURLE_OK)
      return 1;

    /* always cleanup */
    curl_easy_cleanup(curl);
  }
  return 0;
}
