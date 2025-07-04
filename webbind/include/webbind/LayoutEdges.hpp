#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class LayoutEdges : public emlite::Val {
    explicit LayoutEdges(Handle h) noexcept;

public:
    explicit LayoutEdges(const emlite::Val &val) noexcept;
    static LayoutEdges take_ownership(Handle h) noexcept;

    LayoutEdges clone() const noexcept;
    double inlineStart() const;
    double inlineEnd() const;
    double blockStart() const;
    double blockEnd() const;
    double inline_() const;
    double block() const;
};

