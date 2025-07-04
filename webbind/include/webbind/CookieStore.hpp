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
    jsbind::USVString name() const;
    void name(const jsbind::USVString& value);
    jsbind::USVString value() const;
    void value(const jsbind::USVString& value);
    jsbind::USVString domain() const;
    void domain(const jsbind::USVString& value);
    jsbind::USVString path() const;
    void path(const jsbind::USVString& value);
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
    jsbind::USVString name() const;
    void name(const jsbind::USVString& value);
    jsbind::USVString url() const;
    void url(const jsbind::USVString& value);
};

class CookieInit : public emlite::Val {
  explicit CookieInit(Handle h) noexcept;
public:
    static CookieInit take_ownership(Handle h) noexcept;
    explicit CookieInit(const emlite::Val &val) noexcept;
    CookieInit() noexcept;
    CookieInit clone() const noexcept;
    jsbind::USVString name() const;
    void name(const jsbind::USVString& value);
    jsbind::USVString value() const;
    void value(const jsbind::USVString& value);
    jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
    jsbind::USVString domain() const;
    void domain(const jsbind::USVString& value);
    jsbind::USVString path() const;
    void path(const jsbind::USVString& value);
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
    jsbind::USVString name() const;
    void name(const jsbind::USVString& value);
    jsbind::USVString domain() const;
    void domain(const jsbind::USVString& value);
    jsbind::USVString path() const;
    void path(const jsbind::USVString& value);
    bool partitioned() const;
    void partitioned(bool value);
};

class CookieStore : public EventTarget {
    explicit CookieStore(Handle h) noexcept;

public:
    explicit CookieStore(const emlite::Val &val) noexcept;
    static CookieStore take_ownership(Handle h) noexcept;

    CookieStore clone() const noexcept;
    jsbind::Promise get(const CookieStoreGetOptions& options);
    jsbind::Promise getAll(const CookieStoreGetOptions& options);
    jsbind::Promise set(const CookieInit& options);
    jsbind::Promise delete_(const CookieStoreDeleteOptions& options);
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

