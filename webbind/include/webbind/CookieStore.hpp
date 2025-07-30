#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class CookieListItem;
class CookieStoreGetOptions;
class CookieInit;
class CookieStoreDeleteOptions;


class CookieListItem : public emlite::Val {
  explicit CookieListItem(Handle h) noexcept;
public:
    static CookieListItem take_ownership(Handle h) noexcept;
    explicit CookieListItem(const emlite::Val &val) noexcept;
    CookieListItem() noexcept;
    CookieListItem clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
    jsbind::String domain() const;
    void domain(const jsbind::String& value);
    jsbind::String path() const;
    void path(const jsbind::String& value);
    jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
    bool secure() const;
    void secure(bool value);
    CookieSameSite sameSite() const;
    void sameSite(const CookieSameSite& value);
    bool partitioned() const;
    void partitioned(bool value);
};

class CookieStoreGetOptions : public emlite::Val {
  explicit CookieStoreGetOptions(Handle h) noexcept;
public:
    static CookieStoreGetOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreGetOptions(const emlite::Val &val) noexcept;
    CookieStoreGetOptions() noexcept;
    CookieStoreGetOptions clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String url() const;
    void url(const jsbind::String& value);
};

class CookieInit : public emlite::Val {
  explicit CookieInit(Handle h) noexcept;
public:
    static CookieInit take_ownership(Handle h) noexcept;
    explicit CookieInit(const emlite::Val &val) noexcept;
    CookieInit() noexcept;
    CookieInit clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
    jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
    jsbind::String domain() const;
    void domain(const jsbind::String& value);
    jsbind::String path() const;
    void path(const jsbind::String& value);
    CookieSameSite sameSite() const;
    void sameSite(const CookieSameSite& value);
    bool partitioned() const;
    void partitioned(bool value);
};

class CookieStoreDeleteOptions : public emlite::Val {
  explicit CookieStoreDeleteOptions(Handle h) noexcept;
public:
    static CookieStoreDeleteOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreDeleteOptions(const emlite::Val &val) noexcept;
    CookieStoreDeleteOptions() noexcept;
    CookieStoreDeleteOptions clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String domain() const;
    void domain(const jsbind::String& value);
    jsbind::String path() const;
    void path(const jsbind::String& value);
    bool partitioned() const;
    void partitioned(bool value);
};

class CookieStore : public EventTarget {
    explicit CookieStore(Handle h) noexcept;

public:
    explicit CookieStore(const emlite::Val &val) noexcept;
    static CookieStore take_ownership(Handle h) noexcept;

    CookieStore clone() const noexcept;
    jsbind::Promise<CookieListItem> get();
    jsbind::Promise<CookieListItem> get(const CookieStoreGetOptions& options);
    jsbind::Promise<jsbind::Any> getAll();
    jsbind::Promise<jsbind::Any> getAll(const CookieStoreGetOptions& options);
    jsbind::Promise<jsbind::Undefined> set(const CookieInit& options);
    jsbind::Promise<jsbind::Undefined> delete_(const CookieStoreDeleteOptions& options);
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

