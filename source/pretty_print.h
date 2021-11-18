#pragma once
#include <type_traits>
#include <vector>

template<typename OutputStream, typename LinearContainer>
void vectorPrinterImpl(OutputStream &os, LinearContainer &&container)
{
    os << "{";

    const auto itemsCount = container.size();
    for (auto index = 0; index < itemsCount; ++index) {
        const auto nextItem = container.at(index);
        const auto lineEnder = index == itemsCount - 1 ? "" : ", ";
        os << nextItem << lineEnder;
    }
    os << "}";
}

template<typename OutputStream, typename Container>
OutputStream& operator<<(OutputStream &os, Container&& container)
{
    using ContainType = typename std::decay_t<Container>::value_type;
    if constexpr (std::is_same_v<std::decay_t<Container>, std::vector<ContainType>>) {
        vectorPrinterImpl(os, container);
    }
    return os;
}