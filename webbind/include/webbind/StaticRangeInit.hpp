#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Dictionary type StaticRangeInit
class StaticRangeInit : public emlite::Val {
  explicit StaticRangeInit(Handle h) noexcept;
public:
    static StaticRangeInit take_ownership(Handle h) noexcept;
    explicit StaticRangeInit(const emlite::Val &val) noexcept;
    StaticRangeInit() noexcept;
    [[nodiscard]] StaticRangeInit clone() const noexcept;
    /// Getter of the `startContainer` attribute.
    [[nodiscard]] Node startContainer() const;
    /// Setter of the `startContainer` attribute.
    void startContainer(const Node& value);
    /// Getter of the `startOffset` attribute.
    [[nodiscard]] unsigned long startOffset() const;
    /// Setter of the `startOffset` attribute.
    void startOffset(unsigned long value);
    /// Getter of the `endContainer` attribute.
    [[nodiscard]] Node endContainer() const;
    /// Setter of the `endContainer` attribute.
    void endContainer(const Node& value);
    /// Getter of the `endOffset` attribute.
    [[nodiscard]] unsigned long endOffset() const;
    /// Setter of the `endOffset` attribute.
    void endOffset(unsigned long value);
};

} // namespace webbind