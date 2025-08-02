#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NotRestoredReasonDetails;
class NotRestoredReasons;


/// The NotRestoredReasons class.
/// [`NotRestoredReasons`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons)
class NotRestoredReasons : public emlite::Val {
    explicit NotRestoredReasons(Handle h) noexcept;

public:
    explicit NotRestoredReasons(const emlite::Val &val) noexcept;
    static NotRestoredReasons take_ownership(Handle h) noexcept;

    [[nodiscard]] NotRestoredReasons clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `src` attribute.
    /// [`NotRestoredReasons.src`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/src)
    [[nodiscard]] jsbind::String src() const;
    /// Getter of the `id` attribute.
    /// [`NotRestoredReasons.id`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `name` attribute.
    /// [`NotRestoredReasons.name`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `url` attribute.
    /// [`NotRestoredReasons.url`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `reasons` attribute.
    /// [`NotRestoredReasons.reasons`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/reasons)
    [[nodiscard]] jsbind::TypedArray<NotRestoredReasonDetails> reasons() const;
    /// Getter of the `children` attribute.
    /// [`NotRestoredReasons.children`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/children)
    [[nodiscard]] jsbind::TypedArray<NotRestoredReasons> children() const;
    /// The toJSON method.
    /// [`NotRestoredReasons.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/toJSON)
    jsbind::Object toJSON();
};

