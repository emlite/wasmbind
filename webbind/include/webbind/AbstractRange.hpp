#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


/// The AbstractRange class.
/// [`AbstractRange`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange)
class AbstractRange : public emlite::Val {
    explicit AbstractRange(Handle h) noexcept;

public:
    explicit AbstractRange(const emlite::Val &val) noexcept;
    static AbstractRange take_ownership(Handle h) noexcept;

    [[nodiscard]] AbstractRange clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `startContainer` attribute.
    /// [`AbstractRange.startContainer`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/startContainer)
    [[nodiscard]] Node startContainer() const;
    /// Getter of the `startOffset` attribute.
    /// [`AbstractRange.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/startOffset)
    [[nodiscard]] unsigned long startOffset() const;
    /// Getter of the `endContainer` attribute.
    /// [`AbstractRange.endContainer`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/endContainer)
    [[nodiscard]] Node endContainer() const;
    /// Getter of the `endOffset` attribute.
    /// [`AbstractRange.endOffset`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/endOffset)
    [[nodiscard]] unsigned long endOffset() const;
    /// Getter of the `collapsed` attribute.
    /// [`AbstractRange.collapsed`](https://developer.mozilla.org/en-US/docs/Web/API/AbstractRange/collapsed)
    [[nodiscard]] bool collapsed() const;
};

