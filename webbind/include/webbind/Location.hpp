#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMStringList;


class Location : public emlite::Val {
    explicit Location(Handle h) noexcept;

public:
    explicit Location(const emlite::Val &val) noexcept;
    static Location take_ownership(Handle h) noexcept;

    Location clone() const noexcept;
    jsbind::String href() const;
    void href(const jsbind::String& value);
    jsbind::String origin() const;
    jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
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
    jsbind::String hash() const;
    void hash(const jsbind::String& value);
    jsbind::Undefined assign(const jsbind::String& url);
    jsbind::Undefined replace(const jsbind::String& url);
    jsbind::Undefined reload();
    DOMStringList ancestorOrigins() const;
};

