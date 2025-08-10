#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface DOMTokenList
/// [`DOMTokenList`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList)
class DOMTokenList : public emlite::Val {
    explicit DOMTokenList(Handle h) noexcept;
public:
    explicit DOMTokenList(const emlite::Val &val) noexcept;
    static DOMTokenList take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMTokenList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`DOMTokenList.length`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`DOMTokenList.item`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/item)
    jsbind::String item(unsigned long index);
    /// The contains method.
    /// [`DOMTokenList.contains`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/contains)
    bool contains(const jsbind::String& token);
    /// The add method.
    /// [`DOMTokenList.add`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/add)
    jsbind::Undefined add(const jsbind::String& tokens);
    /// The remove method.
    /// [`DOMTokenList.remove`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/remove)
    jsbind::Undefined remove(const jsbind::String& tokens);
    /// The toggle method.
    /// [`DOMTokenList.toggle`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/toggle)
    bool toggle(const jsbind::String& token);
    /// The toggle method.
    /// [`DOMTokenList.toggle`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/toggle)
    bool toggle(const jsbind::String& token, bool force);
    /// The replace method.
    /// [`DOMTokenList.replace`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/replace)
    bool replace(const jsbind::String& token, const jsbind::String& newToken);
    /// The supports method.
    /// [`DOMTokenList.supports`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/supports)
    bool supports(const jsbind::String& token);
    /// Getter of the `value` attribute.
    /// [`DOMTokenList.value`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`DOMTokenList.value`](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/value)
    void value(const jsbind::String& value);
};

} // namespace webbind