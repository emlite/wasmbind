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
    [[nodiscard]] SharedStorageUrlWithMetadata clone() const noexcept;
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] jsbind::Object reportingMetadata() const;
    void reportingMetadata(const jsbind::Object& value);
};

class SharedStorageRunOperationMethodOptions : public emlite::Val {
  explicit SharedStorageRunOperationMethodOptions(Handle h) noexcept;
public:
    static SharedStorageRunOperationMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageRunOperationMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageRunOperationMethodOptions() noexcept;
    [[nodiscard]] SharedStorageRunOperationMethodOptions clone() const noexcept;
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
    [[nodiscard]] bool resolveToConfig() const;
    void resolveToConfig(bool value);
    [[nodiscard]] bool keepAlive() const;
    void keepAlive(bool value);
    [[nodiscard]] jsbind::Any privateAggregationConfig() const;
    void privateAggregationConfig(const jsbind::Any& value);
    [[nodiscard]] jsbind::String savedQuery() const;
    void savedQuery(const jsbind::String& value);
};

/// The SharedStorageWorklet class.
/// [`SharedStorageWorklet`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet)
class SharedStorageWorklet : public Worklet {
    explicit SharedStorageWorklet(Handle h) noexcept;

public:
    explicit SharedStorageWorklet(const emlite::Val &val) noexcept;
    static SharedStorageWorklet take_ownership(Handle h) noexcept;

    [[nodiscard]] SharedStorageWorklet clone() const noexcept;
    /// The selectURL method.
    /// [`SharedStorageWorklet.selectURL`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/selectURL)
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls);
    /// The selectURL method.
    /// [`SharedStorageWorklet.selectURL`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/selectURL)
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options);
    /// The run method.
    /// [`SharedStorageWorklet.run`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/run)
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name);
    /// The run method.
    /// [`SharedStorageWorklet.run`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/run)
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name, const SharedStorageRunOperationMethodOptions& options);
};

