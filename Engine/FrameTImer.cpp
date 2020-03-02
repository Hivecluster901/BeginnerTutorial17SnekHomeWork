#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

float FrameTimer::Mark()
{
	auto old = last;
	last = steady_clock::now();
	duration<float> frametime = last - old;
	return frametime.count();
}
