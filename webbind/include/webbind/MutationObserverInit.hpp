#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MutationObserverInit
/// [`MutationObserverInit`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserverInit)
class MutationObserverInit : public emlite::Val {
  explicit MutationObserverInit(Handle h) noexcept;
public:
    static MutationObserverInit take_ownership(Handle h) noexcept;
    explicit MutationObserverInit(const emlite::Val &val) noexcept;
    MutationObserverInit() noexcept;
    [[nodiscard]] MutationObserverInit clone() const noexcept;
    [[nodiscard]] bool childList() const;
    void childList(bool value);
    [[nodiscard]] bool attributes() const;
    void attributes(bool value);
    [[nodiscard]] bool characterData() const;
    void characterData(bool value);
    [[nodiscard]] bool subtree() const;
    void subtree(bool value);
    [[nodiscard]] bool attributeOldValue() const;
    void attributeOldValue(bool value);
    [[nodiscard]] bool characterDataOldValue() const;
    void characterDataOldValue(bool value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attributeFilter() const;
    void attributeFilter(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind