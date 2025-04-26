#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;

int main()
{
    winrt::init_apartment();

    Uri rssFeedUri { L"https://blogs.windows.com/feed" };
    SyndicationClient syndicationClient;
    syndicationClient.SetRequestHeader(L"User-Agent", L"Mozilla/5.0 (compatible; MSIE 10.0; Windows NT 6.2; WOW64; Trident/6.0)");
    SyndicationFeed syndicationFeed = syndicationClient.RetrieveFeedAsync(rssFeedUri).get();
    for (const SyndicationItem syndicationItem : syndicationFeed.Items()) {
        winrt::hstring titleAsHstring = syndicationItem.Title().Text();

        std::wcout << titleAsHstring.c_str() << std::endl;
    }
}
