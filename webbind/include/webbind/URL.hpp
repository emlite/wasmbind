#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class URL;
class URLSearchParams;


class URL : public emlite::Val {
    explicit URL(Handle h) noexcept;

public:
    explicit URL(const emlite::Val &val) noexcept;
    static URL take_ownership(Handle h) noexcept;

    URL clone() const noexcept;
    URL(const jsbind::String& url);
    URL(const jsbind::String& url, const jsbind::String& base);
    static URL parse(const jsbind::String& url);
    static URL parse(const jsbind::String& url, const jsbind::String& base);
    static bool canParse(const jsbind::String& url);
    static bool canParse(const jsbind::String& url, const jsbind::String& base);
    jsbind::String href() const;
    void href(const jsbind::String& value);
    jsbind::String origin() const;
    jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    jsbind::String username() const;
    void username(const jsbind::String& value);
    jsbind::String password() const;
    void password(const jsbind::String& value);
    jsbind::String host() const;
    void host(const jsbind::String& value);
    jsbind::String hostname() const;
    void hostname(const jsbind::String& value);
    jsbind::String port() const;
    void port(const jsbind::String& value);
    jsbind::String pathname() const;
    void pathname(const jsbind::String& value);
    jsbind::String search() const;
    void search(const jsbind::String& value);
    URLSearchParams searchParams() const;
    jsbind::String hash() const;
    void hash(const jsbind::String& value);
    jsbind::String toJSON();
    static jsbind::String createObjectURL(const jsbind::Any& obj);
    static jsbind::Undefined revokeObjectURL(const jsbind::String& url);
};

