#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class DOMRectReadOnly;


class LayoutShiftAttribution : public emlite::Val {
    explicit LayoutShiftAttribution(Handle h) noexcept;

public:
    explicit LayoutShiftAttribution(const emlite::Val &val) noexcept;
    static LayoutShiftAttribution take_ownership(Handle h) noexcept;

    LayoutShiftAttribution clone() const noexcept;
    Node node() const;
    DOMRectReadOnly previousRect() const;
    DOMRectReadOnly currentRect() const;
};

