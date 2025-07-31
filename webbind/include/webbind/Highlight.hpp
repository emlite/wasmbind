#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AbstractRange;


/// The Highlight class.
/// [`Highlight`](https://developer.mozilla.org/en-US/docs/Web/API/Highlight)
class Highlight : public emlite::Val {
    explicit Highlight(Handle h) noexcept;

public:
    explicit Highlight(const emlite::Val &val) noexcept;
    static Highlight take_ownership(Handle h) noexcept;

    [[nodiscard]] Highlight clone() const noexcept;
    /// The `new Highlight(..)` constructor, creating a new Highlight instance
    Highlight(const AbstractRange& initialRanges);
    /// Getter of the `priority` attribute.
    /// [`Highlight.priority`](https://developer.mozilla.org/en-US/docs/Web/API/Highlight/priority)
    [[nodiscard]] long priority() const;
    /// Setter of the `priority` attribute.
    /// [`Highlight.priority`](https://developer.mozilla.org/en-US/docs/Web/API/Highlight/priority)
    void priority(long value);
    /// Getter of the `type` attribute.
    /// [`Highlight.type`](https://developer.mozilla.org/en-US/docs/Web/API/Highlight/type)
    [[nodiscard]] HighlightType type() const;
    /// Setter of the `type` attribute.
    /// [`Highlight.type`](https://developer.mozilla.org/en-US/docs/Web/API/Highlight/type)
    void type(const HighlightType& value);
};

