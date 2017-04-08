/*
 * all of the time
 * you spent worrying about the future,
 * what would you do with it
 * if you had it back
 */

template <typename T>
struct Time {
    using Spent = T;
};

template <typename X, typename Y>
Time<Y> instead(Time<X> time) {
    return Time<Y>();
}

class SpentWorryingAboutTheFuture {};
class WhatYouWouldDo {};

int main()
{
    Time<SpentWorryingAboutTheFuture> time;
    instead<decltype(time)::Spent, WhatYouWouldDo>(x);
    return 0;
}
