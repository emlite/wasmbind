#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MutationObserverInit
class MutationObserverInit : public emlite::Val {
  explicit MutationObserverInit(Handle h) noexcept;
public:
    static MutationObserverInit take_ownership(Handle h) noexcept;
    explicit MutationObserverInit(const emlite::Val &val) noexcept;
    MutationObserverInit() noexcept;
    [[nodiscard]] MutationObserverInit clone() const noexcept;
    /// Getter of the `childList` attribute.
    [[nodiscard]] bool childList() const;
    /// Setter of the `childList` attribute.
    void childList(bool value);
    /// Getter of the `attributes` attribute.
    [[nodiscard]] bool attributes() const;
    /// Setter of the `attributes` attribute.
    void attributes(bool value);
    /// Getter of the `characterData` attribute.
    [[nodiscard]] bool characterData() const;
    /// Setter of the `characterData` attribute.
    void characterData(bool value);
    /// Getter of the `subtree` attribute.
    [[nodiscard]] bool subtree() const;
    /// Setter of the `subtree` attribute.
    void subtree(bool value);
    /// Getter of the `attributeOldValue` attribute.
    [[nodiscard]] bool attributeOldValue() const;
    /// Setter of the `attributeOldValue` attribute.
    void attributeOldValue(bool value);
    /// Getter of the `characterDataOldValue` attribute.
    [[nodiscard]] bool characterDataOldValue() const;
    /// Setter of the `characterDataOldValue` attribute.
    void characterDataOldValue(bool value);
    /// Getter of the `attributeFilter` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attributeFilter() const;
    /// Setter of the `attributeFilter` attribute.
    void attributeFilter(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind