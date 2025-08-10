#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CacheQueryOptions;
class Response;
class Request;

/// Interface Cache
/// [`Cache`](https://developer.mozilla.org/en-US/docs/Web/API/Cache)
class Cache : public emlite::Val {
    explicit Cache(Handle h) noexcept;
public:
    explicit Cache(const emlite::Val &val) noexcept;
    static Cache take_ownership(Handle h) noexcept;
    [[nodiscard]] Cache clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The match method.
    /// [`Cache.match`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/match)
    jsbind::Promise<jsbind::Any> match(const jsbind::Any& request);
    /// The match method.
    /// [`Cache.match`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/match)
    jsbind::Promise<jsbind::Any> match(const jsbind::Any& request, const CacheQueryOptions& options);
    /// The matchAll method.
    /// [`Cache.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/matchAll)
    jsbind::Promise<jsbind::TypedArray<Response>> matchAll();
    /// The matchAll method.
    /// [`Cache.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/matchAll)
    jsbind::Promise<jsbind::TypedArray<Response>> matchAll(const jsbind::Any& request);
    /// The matchAll method.
    /// [`Cache.matchAll`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/matchAll)
    jsbind::Promise<jsbind::TypedArray<Response>> matchAll(const jsbind::Any& request, const CacheQueryOptions& options);
    /// The add method.
    /// [`Cache.add`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/add)
    jsbind::Promise<jsbind::Undefined> add(const jsbind::Any& request);
    /// The addAll method.
    /// [`Cache.addAll`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/addAll)
    jsbind::Promise<jsbind::Undefined> addAll(const jsbind::TypedArray<jsbind::Any>& requests);
    /// The put method.
    /// [`Cache.put`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/put)
    jsbind::Promise<jsbind::Undefined> put(const jsbind::Any& request, const Response& response);
    /// The delete method.
    /// [`Cache.delete`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/delete)
    jsbind::Promise<bool> delete_(const jsbind::Any& request);
    /// The delete method.
    /// [`Cache.delete`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/delete)
    jsbind::Promise<bool> delete_(const jsbind::Any& request, const CacheQueryOptions& options);
    /// The keys method.
    /// [`Cache.keys`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/keys)
    jsbind::Promise<jsbind::TypedArray<Request>> keys();
    /// The keys method.
    /// [`Cache.keys`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/keys)
    jsbind::Promise<jsbind::TypedArray<Request>> keys(const jsbind::Any& request);
    /// The keys method.
    /// [`Cache.keys`](https://developer.mozilla.org/en-US/docs/Web/API/Cache/keys)
    jsbind::Promise<jsbind::TypedArray<Request>> keys(const jsbind::Any& request, const CacheQueryOptions& options);
};

} // namespace webbind