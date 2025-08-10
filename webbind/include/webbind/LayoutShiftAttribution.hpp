#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;
class DOMRectReadOnly;

/// Interface LayoutShiftAttribution
/// [`LayoutShiftAttribution`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShiftAttribution)
class LayoutShiftAttribution : public emlite::Val {
    explicit LayoutShiftAttribution(Handle h) noexcept;
public:
    explicit LayoutShiftAttribution(const emlite::Val &val) noexcept;
    static LayoutShiftAttribution take_ownership(Handle h) noexcept;
    [[nodiscard]] LayoutShiftAttribution clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `node` attribute.
    /// [`LayoutShiftAttribution.node`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShiftAttribution/node)
    [[nodiscard]] Node node() const;
    /// Getter of the `previousRect` attribute.
    /// [`LayoutShiftAttribution.previousRect`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShiftAttribution/previousRect)
    [[nodiscard]] DOMRectReadOnly previousRect() const;
    /// Getter of the `currentRect` attribute.
    /// [`LayoutShiftAttribution.currentRect`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShiftAttribution/currentRect)
    [[nodiscard]] DOMRectReadOnly currentRect() const;
};

} // namespace webbind