#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NotRestoredReasonDetails;
class NotRestoredReasons;

/// Interface NotRestoredReasons
/// [`NotRestoredReasons`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons)
class NotRestoredReasons : public emlite::Val {
    explicit NotRestoredReasons(Handle h) noexcept;
public:
    explicit NotRestoredReasons(const emlite::Val &val) noexcept;
    static NotRestoredReasons take_ownership(Handle h) noexcept;
    [[nodiscard]] NotRestoredReasons clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`NotRestoredReasons.src`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/src)
    /// [`NotRestoredReasons.src`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/src)
    [[nodiscard]] jsbind::String src() const;
    /// [`NotRestoredReasons.id`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/id)
    /// [`NotRestoredReasons.id`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`NotRestoredReasons.name`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/name)
    /// [`NotRestoredReasons.name`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`NotRestoredReasons.url`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/url)
    /// [`NotRestoredReasons.url`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`NotRestoredReasons.reasons`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/reasons)
    /// [`NotRestoredReasons.reasons`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/reasons)
    [[nodiscard]] jsbind::TypedArray<NotRestoredReasonDetails> reasons() const;
    /// [`NotRestoredReasons.children`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/children)
    /// [`NotRestoredReasons.children`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/children)
    [[nodiscard]] jsbind::TypedArray<NotRestoredReasons> children() const;
    /// The toJSON method.
    /// [`NotRestoredReasons.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind