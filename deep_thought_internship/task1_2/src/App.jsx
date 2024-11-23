import "./App.css";
import data from "./data.json";
import AssetCard from "./components/AssetCard";



function App() {
  let assets = data.tasks[0].assets;
  console.log(assets.length);

  return (
    <>
      <div className="header">
        <div className="logo">
          <img
            src="https://deepthought.education/assets/images/logo/logo.svg"
            alt="Deep Thought logo"
          />
        </div>
        <div className="icons">
          <ul className="navbar">
            <li>
              <img
                src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNCIgaGVpZ2h0PSIyNCIgdmlld0JveD0iMCAwIDI0IDI0IiBmaWxsPSJub25lIiBzdHJva2U9ImN1cnJlbnRDb2xvciIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGNsYXNzPSJsdWNpZGUgbHVjaWRlLWhvdXNlIj48cGF0aCBkPSJNMTUgMjF2LThhMSAxIDAgMCAwLTEtMWgtNGExIDEgMCAwIDAtMSAxdjgiLz48cGF0aCBkPSJNMyAxMGEyIDIgMCAwIDEgLjcwOS0xLjUyOGw3LTUuOTk5YTIgMiAwIDAgMSAyLjU4MiAwbDcgNS45OTlBMiAyIDAgMCAxIDIxIDEwdjlhMiAyIDAgMCAxLTIgMkg1YTIgMiAwIDAgMS0yLTJ6Ii8+PC9zdmc+"
                alt="home icon"
              />
            </li>
            <li>
              <img
                src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNCIgaGVpZ2h0PSIyNCIgdmlld0JveD0iMCAwIDI0IDI0IiBmaWxsPSJub25lIiBzdHJva2U9ImN1cnJlbnRDb2xvciIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGNsYXNzPSJsdWNpZGUgbHVjaWRlLXdyZW5jaCI+PHBhdGggZD0iTTE0LjcgNi4zYTEgMSAwIDAgMCAwIDEuNGwxLjYgMS42YTEgMSAwIDAgMCAxLjQgMGwzLjc3LTMuNzdhNiA2IDAgMCAxLTcuOTQgNy45NGwtNi45MSA2LjkxYTIuMTIgMi4xMiAwIDAgMS0zLTNsNi45MS02LjkxYTYgNiAwIDAgMSA3Ljk0LTcuOTRsLTMuNzYgMy43NnoiLz48L3N2Zz4="
                alt="tools icon"
              />
            </li>
            <li>
              <img
                src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNCIgaGVpZ2h0PSIyNCIgdmlld0JveD0iMCAwIDI0IDI0IiBmaWxsPSJub25lIiBzdHJva2U9ImN1cnJlbnRDb2xvciIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGNsYXNzPSJsdWNpZGUgbHVjaWRlLWJlbGwtZG90Ij48cGF0aCBkPSJNMTkuNCAxNC45QzIwLjIgMTYuNCAyMSAxNyAyMSAxN0gzczMtMiAzLTljMC0zLjMgMi43LTYgNi02IC43IDAgMS4zLjEgMS45LjMiLz48cGF0aCBkPSJNMTAuMyAyMWExLjk0IDEuOTQgMCAwIDAgMy40IDAiLz48Y2lyY2xlIGN4PSIxOCIgY3k9IjgiIHI9IjMiLz48L3N2Zz4="
                alt="notification icon"
              />
            </li>
            <li>
              <img
                src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNCIgaGVpZ2h0PSIyNCIgdmlld0JveD0iMCAwIDI0IDI0IiBmaWxsPSJub25lIiBzdHJva2U9ImN1cnJlbnRDb2xvciIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGNsYXNzPSJsdWNpZGUgbHVjaWRlLXVzZXIiPjxwYXRoIGQ9Ik0xOSAyMXYtMmE0IDQgMCAwIDAtNC00SDlhNCA0IDAgMCAwLTQgNHYyIi8+PGNpcmNsZSBjeD0iMTIiIGN5PSI3IiByPSI0Ii8+PC9zdmc+"
                alt="user icon"
              />
            </li>
            <li>
              <img
                src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNCIgaGVpZ2h0PSIyNCIgdmlld0JveD0iMCAwIDI0IDI0IiBmaWxsPSJub25lIiBzdHJva2U9ImN1cnJlbnRDb2xvciIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGNsYXNzPSJsdWNpZGUgbHVjaWRlLWVsbGlwc2lzLXZlcnRpY2FsIj48Y2lyY2xlIGN4PSIxMiIgY3k9IjEyIiByPSIxIi8+PGNpcmNsZSBjeD0iMTIiIGN5PSI1IiByPSIxIi8+PGNpcmNsZSBjeD0iMTIiIGN5PSIxOSIgcj0iMSIvPjwvc3ZnPg=="
                alt="three vertical dots"
              />
            </li>
          </ul>
        </div>
      </div>

      <div className="main-page">
        <div className="journey-board">
          <div className="btn-area">
            <button>
              <img
                src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNCIgaGVpZ2h0PSIyNCIgdmlld0JveD0iMCAwIDI0IDI0IiBmaWxsPSJub25lIiBzdHJva2U9ImN1cnJlbnRDb2xvciIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiIHN0cm9rZS1saW5lam9pbj0icm91bmQiIGNsYXNzPSJsdWNpZGUgbHVjaWRlLW1vdmUtbGVmdCI+PHBhdGggZD0iTTYgOEwyIDEyTDYgMTYiLz48cGF0aCBkPSJNMiAxMkgyMiIvPjwvc3ZnPg=="
                alt="arrow icon"
                onClick={() => {
                  showSideMenu;
                }}
              />
            </button>
          </div>

          <div className="journey-board-content">
            
            

            <ul>
              <li>Explore the world of Management</li>
              {assets.map((asset)=>{
                <li>{asset.asset_title}</li>
                // console.log(asset.asset_title)
              })}
            </ul>
          </div>
        </div>
        <div className="content">
          <div className="title">
            <p>Technical Project Management</p>
            <button>submit task</button>
          </div>

          <p className="task-desc">
            {data.tasks[0].task_title}
            <span>{data.tasks[0].task_description}</span>
          </p>

          <div className="assets">
            {assets.map((asset) => (
              // Pass the asset as a prop
              <AssetCard key={asset.asset_id} asset={asset} />
            ))}
          </div>
        </div>

        <div className="notice-board">
          <p>X NOTICE BOARD</p>
        </div>
      </div>
    </>
  );
}

export default App;
