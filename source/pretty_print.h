#pragma once

template<typename OutputStream, typename Container>
OutputStream& operator<<(OutputStream &os, Container&& container)
{
    os << "{";

    const auto itemsCount = container.size();
    for (auto index = 0; index < itemsCount; ++index) {
        const auto nextItem = container.at(index);
        const auto lineEnder = index == itemsCount - 1 ? "" : ", ";
        os << nextItem << lineEnder;
    }
    os << "}";
    return os;
}
