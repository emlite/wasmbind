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
    [[nodiscard]] CookieListItem clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String value() const;
    void value(const jsbind::String& value);
    [[nodiscard]] jsbind::String domain() const;
    void domain(const jsbind::String& value);
    [[nodiscard]] jsbind::String path() const;
    void path(const jsbind::String& value);
    [[nodiscard]] jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
    [[nodiscard]] bool secure() const;
    void secure(bool value);
    [[nodiscard]] CookieSameSite sameSite() const;
    void sameSite(const CookieSameSite& value);
    [[nodiscard]] bool partitioned() const;
    void partitioned(bool value);
};

class CookieStoreGetOptions : public emlite::Val {
  explicit CookieStoreGetOptions(Handle h) noexcept;
public:
    static CookieStoreGetOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreGetOptions(const emlite::Val &val) noexcept;
    CookieStoreGetOptions() noexcept;
    [[nodiscard]] CookieStoreGetOptions clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

class CookieInit : public emlite::Val {
  explicit CookieInit(Handle h) noexcept;
public:
    static CookieInit take_ownership(Handle h) noexcept;
    explicit CookieInit(const emlite::Val &val) noexcept;
    CookieInit() noexcept;
    [[nodiscard]] CookieInit clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String value() const;
    void value(const jsbind::String& value);
    [[nodiscard]] jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
    [[nodiscard]] jsbind::String domain() const;
    void domain(const jsbind::String& value);
    [[nodiscard]] jsbind::String path() const;
    void path(const jsbind::String& value);
    [[nodiscard]] CookieSameSite sameSite() const;
    void sameSite(const CookieSameSite& value);
    [[nodiscard]] bool partitioned() const;
    void partitioned(bool value);
};

class CookieStoreDeleteOptions : public emlite::Val {
  explicit CookieStoreDeleteOptions(Handle h) noexcept;
public:
    static CookieStoreDeleteOptions take_ownership(Handle h) noexcept;
    explicit CookieStoreDeleteOptions(const emlite::Val &val) noexcept;
    CookieStoreDeleteOptions() noexcept;
    [[nodiscard]] CookieStoreDeleteOptions clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String domain() const;
    void domain(const jsbind::String& value);
    [[nodiscard]] jsbind::String path() const;
    void path(const jsbind::String& value);
    [[nodiscard]] bool partitioned() const;
    void partitioned(bool value);
};

/// The CookieStore class.
/// [`CookieStore`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore)
class CookieStore : public EventTarget {
    explicit CookieStore(Handle h) noexcept;

public:
    explicit CookieStore(const emlite::Val &val) noexcept;
    static CookieStore take_ownership(Handle h) noexcept;

    [[nodiscard]] CookieStore clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The get method.
    /// [`CookieStore.get`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/get)
    jsbind::Promise<CookieListItem> get();
    /// The get method.
    /// [`CookieStore.get`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/get)
    jsbind::Promise<CookieListItem> get(const CookieStoreGetOptions& options);
    /// The getAll method.
    /// [`CookieStore.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/getAll)
    jsbind::Promise<jsbind::Any> getAll();
    /// The getAll method.
    /// [`CookieStore.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/getAll)
    jsbind::Promise<jsbind::Any> getAll(const CookieStoreGetOptions& options);
    /// The set method.
    /// [`CookieStore.set`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/set)
    jsbind::Promise<jsbind::Undefined> set(const CookieInit& options);
    /// The delete method.
    /// [`CookieStore.delete`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/delete)
    jsbind::Promise<jsbind::Undefined> delete_(const CookieStoreDeleteOptions& options);
    /// Getter of the `onchange` attribute.
    /// [`CookieStore.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`CookieStore.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore/onchange)
    void onchange(const jsbind::Any& value);
};

