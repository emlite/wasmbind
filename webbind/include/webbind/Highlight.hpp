#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AbstractRange;


class Highlight : public emlite::Val {
    explicit Highlight(Handle h) noexcept;

public:
    explicit Highlight(const emlite::Val &val) noexcept;
    static Highlight take_ownership(Handle h) noexcept;

    Highlight clone() const noexcept;
    Highlight(const AbstractRange& initialRanges);
    long priority() const;
    void priority(long value);
    HighlightType type() const;
    void type(const HighlightType& value);
};

