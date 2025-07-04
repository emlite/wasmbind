#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Client;
class ClientQueryOptions;
class WindowClient;


class ClientQueryOptions : public emlite::Val {
  explicit ClientQueryOptions(Handle h) noexcept;
public:
    static ClientQueryOptions take_ownership(Handle h) noexcept;
    explicit ClientQueryOptions(const emlite::Val &val) noexcept;
    ClientQueryOptions() noexcept;
    ClientQueryOptions clone() const noexcept;
    bool includeUncontrolled() const;
    void includeUncontrolled(bool value);
    ClientType type() const;
    void type(const ClientType& value);
};

class Clients : public emlite::Val {
    explicit Clients(Handle h) noexcept;

public:
    explicit Clients(const emlite::Val &val) noexcept;
    static Clients take_ownership(Handle h) noexcept;

    Clients clone() const noexcept;
    jsbind::Promise get(const jsbind::DOMString& id);
    jsbind::Promise matchAll(const ClientQueryOptions& options);
    jsbind::Promise openWindow(const jsbind::USVString& url);
    jsbind::Promise claim();
};

