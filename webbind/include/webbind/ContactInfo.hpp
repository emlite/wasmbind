#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ContactAddress;
class Blob;

/// Dictionary type ContactInfo
/// [`ContactInfo`](https://developer.mozilla.org/en-US/docs/Web/API/ContactInfo)
class ContactInfo : public emlite::Val {
  explicit ContactInfo(Handle h) noexcept;
public:
    static ContactInfo take_ownership(Handle h) noexcept;
    explicit ContactInfo(const emlite::Val &val) noexcept;
    ContactInfo() noexcept;
    [[nodiscard]] ContactInfo clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<ContactAddress> address() const;
    void address(const jsbind::TypedArray<ContactAddress>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> email() const;
    void email(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<Blob> icon() const;
    void icon(const jsbind::TypedArray<Blob>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> name() const;
    void name(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> tel() const;
    void tel(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind