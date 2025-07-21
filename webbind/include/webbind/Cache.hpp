#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "BackgroundFetchRegistration.hpp"
#include "enums.hpp"

class Response;
class Request;


class Cache : public emlite::Val {
    explicit Cache(Handle h) noexcept;

public:
    explicit Cache(const emlite::Val &val) noexcept;
    static Cache take_ownership(Handle h) noexcept;

    Cache clone() const noexcept;
    jsbind::Promise<jsbind::Any> match(const jsbind::Any& request);
    jsbind::Promise<jsbind::Any> match(const jsbind::Any& request, const CacheQueryOptions& options);
    jsbind::Promise<jsbind::FrozenArray<Response>> matchAll();
    jsbind::Promise<jsbind::FrozenArray<Response>> matchAll(const jsbind::Any& request);
    jsbind::Promise<jsbind::FrozenArray<Response>> matchAll(const jsbind::Any& request, const CacheQueryOptions& options);
    jsbind::Promise<jsbind::Undefined> add(const jsbind::Any& request);
    jsbind::Promise<jsbind::Undefined> addAll(const jsbind::Sequence<jsbind::Any>& requests);
    jsbind::Promise<jsbind::Undefined> put(const jsbind::Any& request, const Response& response);
    jsbind::Promise<bool> delete_(const jsbind::Any& request);
    jsbind::Promise<bool> delete_(const jsbind::Any& request, const CacheQueryOptions& options);
    jsbind::Promise<jsbind::FrozenArray<Request>> keys();
    jsbind::Promise<jsbind::FrozenArray<Request>> keys(const jsbind::Any& request);
    jsbind::Promise<jsbind::FrozenArray<Request>> keys(const jsbind::Any& request, const CacheQueryOptions& options);
};

