# EmployWise Frontend

## Overview
This project is a React-based frontend application that interacts with the Reqres API to perform basic user management functions, including authentication, listing users, editing user details, and deleting users.

---

## Features
- User Authentication
- Paginated User List
- Edit User Details
- Delete Users
- Responsive UI
- React Router for navigation

---

## Requirements
Ensure you have the following installed on your machine:
- Node.js (v16 or above)
- npm or yarn

---

## Installation

1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```

2. Navigate to the project directory:
   ```bash
   cd employwise-frontend
   ```

3. Install dependencies:
   ```bash
   npm install
   ```

---

## Running the Application

1. Start the development server:
   ```bash
   npm run dev
   ```

2. Open the application in your browser at:
   ```
   http://localhost:5173
   ```

---

## File Structure

```
src/
├── components/          # React components
│   ├── Login.jsx        # Login screen
│   ├── UsersList.jsx    # User list screen
│   ├── UserEditForm.jsx # User edit form
├── utils/
│   └── api.js           # API utility functions
├── App.jsx              # Application entry point
├── main.jsx             # React DOM entry point
```

---

## Assumptions and Considerations

1. **Authentication**
   - Users can log in using the credentials provided by the Reqres API.
   - Token persistence is handled using `localStorage`.

2. **User Management**
   - User data is fetched using the Reqres API with pagination support.
   - User updates and deletions are simulated as per the API.

3. **Error Handling**
   - API errors are handled gracefully, displaying appropriate messages to the user.

4. **Responsive Design**
   - The UI is responsive and works on both desktop and mobile devices.

5. **React Router**
   - Navigation between pages is managed using React Router.

---

## Dependencies

- `react`
- `react-dom`
- `react-router-dom`
- `axios`

---

## Deployment

To deploy the application, build the project and host it on a platform like Netlify or Vercel:

1. Build the project:
   ```bash
   npm run build
   ```

2. Deploy the `dist` folder to your hosting platform.

---

## API Endpoints Used

1. **Login**
   - Method: `POST`
   - Endpoint: `/api/login`
   - Payload: `{ email, password }`

2. **Fetch Users**
   - Method: `GET`
   - Endpoint: `/api/users?page=1`

3. **Update User**
   - Method: `PUT`
   - Endpoint: `/api/users/{id}`
   - Payload: `{ first_name, last_name, email }`

4. **Delete User**
   - Method: `DELETE`
   - Endpoint: `/api/users/{id}`

---


