#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


class AbstractRange : public emlite::Val {
    explicit AbstractRange(Handle h) noexcept;

public:
    explicit AbstractRange(const emlite::Val &val) noexcept;
    static AbstractRange take_ownership(Handle h) noexcept;

    AbstractRange clone() const noexcept;
    Node startContainer() const;
    unsigned long startOffset() const;
    Node endContainer() const;
    unsigned long endOffset() const;
    bool collapsed() const;
};

