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
    jsbind::Sequence<ContactAddress> address() const;
    void address(const jsbind::Sequence<ContactAddress>& value);
    jsbind::Sequence<jsbind::DOMString> email() const;
    void email(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<Blob> icon() const;
    void icon(const jsbind::Sequence<Blob>& value);
    jsbind::Sequence<jsbind::DOMString> name() const;
    void name(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<jsbind::DOMString> tel() const;
    void tel(const jsbind::Sequence<jsbind::DOMString>& value);
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
    jsbind::Promise getProperties();
    jsbind::Promise select(const jsbind::Sequence<ContactProperty>& properties, const ContactsSelectOptions& options);
};

