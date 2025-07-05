#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Worklet.hpp"
#include "enums.hpp"

class SharedStorageUrlWithMetadata;
class SharedStorageRunOperationMethodOptions;


class SharedStorageUrlWithMetadata : public emlite::Val {
  explicit SharedStorageUrlWithMetadata(Handle h) noexcept;
public:
    static SharedStorageUrlWithMetadata take_ownership(Handle h) noexcept;
    explicit SharedStorageUrlWithMetadata(const emlite::Val &val) noexcept;
    SharedStorageUrlWithMetadata() noexcept;
    SharedStorageUrlWithMetadata clone() const noexcept;
    jsbind::USVString url() const;
    void url(const jsbind::USVString& value);
    jsbind::Object reportingMetadata() const;
    void reportingMetadata(const jsbind::Object& value);
};

class SharedStorageRunOperationMethodOptions : public emlite::Val {
  explicit SharedStorageRunOperationMethodOptions(Handle h) noexcept;
public:
    static SharedStorageRunOperationMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageRunOperationMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageRunOperationMethodOptions() noexcept;
    SharedStorageRunOperationMethodOptions clone() const noexcept;
    jsbind::Object data() const;
    void data(const jsbind::Object& value);
    bool resolveToConfig() const;
    void resolveToConfig(bool value);
    bool keepAlive() const;
    void keepAlive(bool value);
    jsbind::Any privateAggregationConfig() const;
    void privateAggregationConfig(const jsbind::Any& value);
    jsbind::DOMString savedQuery() const;
    void savedQuery(const jsbind::DOMString& value);
};

class SharedStorageWorklet : public Worklet {
    explicit SharedStorageWorklet(Handle h) noexcept;

public:
    explicit SharedStorageWorklet(const emlite::Val &val) noexcept;
    static SharedStorageWorklet take_ownership(Handle h) noexcept;

    SharedStorageWorklet clone() const noexcept;
    jsbind::Promise selectURL(const jsbind::DOMString& name, const jsbind::Sequence<SharedStorageUrlWithMetadata>& urls);
    jsbind::Promise selectURL(const jsbind::DOMString& name, const jsbind::Sequence<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options);
    jsbind::Promise run(const jsbind::DOMString& name);
    jsbind::Promise run(const jsbind::DOMString& name, const SharedStorageRunOperationMethodOptions& options);
};

