#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


class NodeList : public emlite::Val {
    explicit NodeList(Handle h) noexcept;

public:
    explicit NodeList(const emlite::Val &val) noexcept;
    static NodeList take_ownership(Handle h) noexcept;

    NodeList clone() const noexcept;
    Node item(unsigned long index);
    unsigned long length() const;
};

