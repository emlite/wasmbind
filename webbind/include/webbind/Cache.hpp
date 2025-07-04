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
    jsbind::Promise match(const jsbind::Any& request, const CacheQueryOptions& options);
    jsbind::Promise matchAll(const jsbind::Any& request, const CacheQueryOptions& options);
    jsbind::Promise add(const jsbind::Any& request);
    jsbind::Promise addAll(const jsbind::Sequence<jsbind::Any>& requests);
    jsbind::Promise put(const jsbind::Any& request, const Response& response);
    jsbind::Promise delete_(const jsbind::Any& request, const CacheQueryOptions& options);
    jsbind::Promise keys(const jsbind::Any& request, const CacheQueryOptions& options);
};

