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
    ContactInfo clone() const noexcept;
    jsbind::TypedArray<ContactAddress> address() const;
    void address(const jsbind::TypedArray<ContactAddress>& value);
    jsbind::TypedArray<jsbind::String> email() const;
    void email(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<Blob> icon() const;
    void icon(const jsbind::TypedArray<Blob>& value);
    jsbind::TypedArray<jsbind::String> name() const;
    void name(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<jsbind::String> tel() const;
    void tel(const jsbind::TypedArray<jsbind::String>& value);
};

class ContactsSelectOptions : public emlite::Val {
  explicit ContactsSelectOptions(Handle h) noexcept;
public:
    static ContactsSelectOptions take_ownership(Handle h) noexcept;
    explicit ContactsSelectOptions(const emlite::Val &val) noexcept;
    ContactsSelectOptions() noexcept;
    ContactsSelectOptions clone() const noexcept;
    bool multiple() const;
    void multiple(bool value);
};

class ContactsManager : public emlite::Val {
    explicit ContactsManager(Handle h) noexcept;

public:
    explicit ContactsManager(const emlite::Val &val) noexcept;
    static ContactsManager take_ownership(Handle h) noexcept;

    ContactsManager clone() const noexcept;
    jsbind::Promise<jsbind::TypedArray<ContactProperty>> getProperties();
    jsbind::Promise<jsbind::TypedArray<ContactInfo>> select(const jsbind::TypedArray<ContactProperty>& properties);
    jsbind::Promise<jsbind::TypedArray<ContactInfo>> select(const jsbind::TypedArray<ContactProperty>& properties, const ContactsSelectOptions& options);
};

