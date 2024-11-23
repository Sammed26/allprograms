import React from "react";

import "./AssetCard.css";

function AssetCard({ asset }) {
  return (
    <div>
      <div className="asset-div">
        {/* <p>{asset.asset_title}</p>
      <p>{asset.asset_description}</p>
      <p>{asset.asset_content}</p>
      <p>{asset.asset_type}</p>
      <p>{asset.asset_content_type}</p> */}

        <p className="asset_heading">{asset.asset_title}</p>

        <p className="asset_desc">{asset.asset_description}</p>
      </div>
    </div>
  );
}

export default AssetCard;
