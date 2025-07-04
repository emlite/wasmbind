#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class DOMRect;


class CaretPosition : public emlite::Val {
    explicit CaretPosition(Handle h) noexcept;

public:
    explicit CaretPosition(const emlite::Val &val) noexcept;
    static CaretPosition take_ownership(Handle h) noexcept;

    CaretPosition clone() const noexcept;
    Node offsetNode() const;
    unsigned long offset() const;
    DOMRect getClientRect();
};

