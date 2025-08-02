#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ContactInfo;
class ContactsSelectOptions;
class ContactAddress;
class Blob;


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

class ContactsSelectOptions : public emlite::Val {
  explicit ContactsSelectOptions(Handle h) noexcept;
public:
    static ContactsSelectOptions take_ownership(Handle h) noexcept;
    explicit ContactsSelectOptions(const emlite::Val &val) noexcept;
    ContactsSelectOptions() noexcept;
    [[nodiscard]] ContactsSelectOptions clone() const noexcept;
    [[nodiscard]] bool multiple() const;
    void multiple(bool value);
};

/// The ContactsManager class.
/// [`ContactsManager`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager)
class ContactsManager : public emlite::Val {
    explicit ContactsManager(Handle h) noexcept;

public:
    explicit ContactsManager(const emlite::Val &val) noexcept;
    static ContactsManager take_ownership(Handle h) noexcept;

    [[nodiscard]] ContactsManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getProperties method.
    /// [`ContactsManager.getProperties`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager/getProperties)
    jsbind::Promise<jsbind::TypedArray<ContactProperty>> getProperties();
    /// The select method.
    /// [`ContactsManager.select`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager/select)
    jsbind::Promise<jsbind::TypedArray<ContactInfo>> select(const jsbind::TypedArray<ContactProperty>& properties);
    /// The select method.
    /// [`ContactsManager.select`](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager/select)
    jsbind::Promise<jsbind::TypedArray<ContactInfo>> select(const jsbind::TypedArray<ContactProperty>& properties, const ContactsSelectOptions& options);
};

