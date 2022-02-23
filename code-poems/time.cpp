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
    instead<decltype(time)::Spent, WhatYouWouldDo>(time);
}
