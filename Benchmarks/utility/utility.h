#pragma once

typedef std::chrono::time_point<std::chrono::steady_clock> steady_time_point;

inline steady_time_point now()
{
    return std::chrono::steady_clock::now();
}

inline size_t duration_in_ms(const steady_time_point & start,
                             const steady_time_point & end)
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
}
