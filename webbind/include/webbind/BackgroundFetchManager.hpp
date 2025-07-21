#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BackgroundFetchRegistration;
class BackgroundFetchOptions;


class BackgroundFetchOptions : public emlite::Val {
  explicit BackgroundFetchOptions(Handle h) noexcept;
public:
    static BackgroundFetchOptions take_ownership(Handle h) noexcept;
    explicit BackgroundFetchOptions(const emlite::Val &val) noexcept;
    BackgroundFetchOptions() noexcept;
    BackgroundFetchOptions clone() const noexcept;
    long long downloadTotal() const;
    void downloadTotal(long long value);
};

class BackgroundFetchManager : public emlite::Val {
    explicit BackgroundFetchManager(Handle h) noexcept;

public:
    explicit BackgroundFetchManager(const emlite::Val &val) noexcept;
    static BackgroundFetchManager take_ownership(Handle h) noexcept;

    BackgroundFetchManager clone() const noexcept;
    jsbind::Promise<BackgroundFetchRegistration> fetch(const jsbind::DOMString& id, const jsbind::Any& requests);
    jsbind::Promise<BackgroundFetchRegistration> fetch(const jsbind::DOMString& id, const jsbind::Any& requests, const BackgroundFetchOptions& options);
    jsbind::Promise<BackgroundFetchRegistration> get(const jsbind::DOMString& id);
    jsbind::Promise<jsbind::Sequence<jsbind::DOMString>> getIds();
};

